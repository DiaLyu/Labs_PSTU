#include <iostream>
#include <conio.h>
#include <locale>
#include<vector>
#include<glut.h>
#include <string>
#include <sstream>
#include <ctime>
#include<iterator>

using namespace std;

int maxSize = 20;
int R;
int WinH = 720, WinW = 900;

template<class T>
class Graph
{
    int adjMatrix[20][20];
    vector<int> labelList;
    vector<int> vertList;

public:
    Graph();
    ~Graph() {}
    int GetVertPos(const T& vertex);
    int get_sizevert() {
        return vertList.size();
    }
    bool IsEmpty();
    bool IsFull();
    int GetAmountVerts();
    int GetAmountEdges();
    int GetWeight(const T& vetrex1, const T& vertex2);
    vector<T> GetNbrs(const T& vertex);
    void InsertVertex(const T& vertex);
    void InsertEdge(const T& vertex1, const T& vertex2, int weight);
    void Print();
    void DrawGraph();
};

template<class T>
Graph<T>::Graph() {
    for (int i = 0; i < maxSize; i++) {
        for (int j = 0; j < maxSize; j++)
            this->adjMatrix[i][j] = 0;
    }
}

template <class T>
int Graph<T>::GetVertPos(const T& vertex) {
    for (int i = 0; i < this->vertList.size(); ++i) {
        if (this->vertList[i] == vertex)
            return i;
    }
    return -1;
}

template<class T>
bool Graph<T>::IsEmpty() {
    if (this->vertList.size() != 0)
        return false;
    else
        return true;
}

template<class T>
bool Graph<T>::IsFull() {
    return (vertList.size() == maxSize);
}

template<class T>
int Graph<T>::GetAmountVerts() {
    return this->vertList.size();
}

template<class T>
int Graph<T>::GetAmountEdges() {
    int amount = 0; // обнуляем счетчик
    if (!this->IsEmpty()) { // проверяем, что граф не пуст
        for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
            for (int j = 0; j < vertListSize; ++j) {
                if (this->adjMatrix[i][j] == 1) // находим рёбра
                    amount += 1; // считаем количество рёбер
            }
        }
        return amount; // возвращаем количество рёбер
    }
    else
        return 0; // если граф пуст, возвращаем 0
}

template<class T>
int Graph<T>::GetWeight(const T& vertex1, const T& vertex2) {
    if (!this->IsEmpty()) {
        int vertPos1 = GetVertPos(vertex1);
        int vertPos2 = GetVertPos(vertex2);
        return adjMatrix[vertPos1][vertPos2];
    }
    return 0;
}

template<class T>
vector<T> Graph<T>::GetNbrs(const T& vertex) {
    vector<T> nbrsList; // создание списка соседей
    int pos = this->GetVertPos(vertex); /* вычисление позиции vertex в матрице смежности */
    if (pos != (-1)) { /* проверка, что vertex есть в матрице смежности */
        for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
            if (this->adjMatrix[pos][i] != 0) /* вычисление соседей*/
                nbrsList.push_back(this->vertList[i]); /* запись соседей в вектор */
        }
    }
    return nbrsList; // возврат списка соседей
}

template<class T>
void Graph<T>::InsertVertex(const T& vertex) {
    if (!this->IsFull()) {
        this->vertList.push_back(vertex);
    }
    else {
        cout << "Граф уже заполнен. Невозможно добавить новую вершину " << endl;
        return;
    }
}

template<class T>
void Graph<T>::InsertEdge(const T& vertex1, const T& vertex2, int weight) {
    if (this->GetVertPos(vertex1) != (-1) && this->GetVertPos(vertex2) != (-1)) {
        int vertPos1 = GetVertPos(vertex1);
        int vertPos2 = GetVertPos(vertex2);
        if (this->adjMatrix[vertPos1][vertPos2] != 0) {
            cout << "Ребро между этими вершинами уже существует" << endl;
            return;
        }
        else {
            this->adjMatrix[vertPos1][vertPos2] = weight;
        }
    }
    else {
        cout << "Обеих вершин (или одной из них) нет в графе " << endl;
        return;
    }
}

template<class T>
void Graph<T>::Print() {
    if (!this->IsEmpty()) {
        cout << "Матрица смежности графа: " << endl;
        for (int i = 0, vertListSize = this->vertList.size(); i < vertListSize; ++i) {
            cout << this->vertList[i] << " ";
            for (int j = 0; j < vertListSize; ++j) {
                cout << " " << this->adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "Граф пуст " << endl;
    }
}

class Pair {
public:
    int first;
    int second;
    Pair() {
        first = 0;
        second = 0;
    }
};

Graph<int> graph;
vector<Pair> way;
vector<int> way1;
int sum = 0;

void print(int** adj) {
    for (int i = 0; i < graph.get_sizevert(); i++) {
        for (int j = 0; j < graph.get_sizevert(); j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
}


int** NewAdjMatrix()	//копируется матрица смежности, при это 0 заменяются на -1 (т. к. 0 используется в задаче)
{
    int n = graph.GetAmountVerts();
    int** adj = new int* [n];
    for (int i = 0; i < n; i++)
        adj[i] = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a = graph.GetWeight(i + 1, j + 1);
            if (a == 0 or i == j)
                adj[i][j] = -1;
            else
                adj[i][j] = a;
        }
    }
    cout << "Начальная матрица: \n";
    print(adj);
    return adj;
}

int** Reduct_Matrix(int** adjMat)	//редукция матрицы	
{
    int** adj = adjMat;
    int n = graph.GetAmountVerts();
    for (int i = 0; i < n; i++){
        int min = 1000000;
        for (int j = 0; j < n; j++)
            if (adj[i][j] >= 0 && adj[i][j] < min)
                min = adj[i][j];
        for (int j = 0; j < n; j++)
            if (adj[i][j] >= 0)
                adj[i][j] -= min;
    }
    for (int i = 0; i < n; i++)
    {
        int min = 1000000;
        for (int j = 0; j < n; j++)
        {
            if (adj[j][i] >= 0 && adj[j][i] < min)
                min = adj[j][i];
        }
        for (int j = 0; j < n; j++)
        {
            if (adj[j][i] >= 0)
                adj[j][i] -= min;
        }
    }
    cout << "\nМатрица после редукции: \n";
    print(adj);
    return adj;
}

int** TSP(int** adjMat)      //ищется 0 с наиб оценкой, записывается промежуточный отрезок пути 
{
    int n = graph.GetAmountVerts();
    int** adj = Reduct_Matrix(adjMat);
    int max = -1;
    int l, c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == 0)
            {
                int minW = 1000000;
                int minH = 1000000;
                for (int k = 0; k < n; k++)
                {
                    if (adj[i][k] != -1 && k != j && adj[i][k] < minW)
                        minW = adj[i][k];
                }
                for (int k = 0; k < n; k++)
                {
                    if (adj[k][j] != -1 && k != i && adj[k][j] < minH)
                        minH = adj[k][j];
                }
                if (max < minH + minW)
                {
                    max = minH + minW;
                    l = i;
                    c = j;
                }
            }
        }
    }
    adj[l][c] = -1;
    adj[c][l] = -1;
    for (int i = 0; i < n; i++)
    {
        adj[l][i] = -1;
        adj[i][c] = -1;
    }
    Pair p;
    p.first = l + 1;
    p.second = c + 1;
    way.push_back(p);

    cout << endl;
    cout << "Матрица после удаления наибольшей оценки: " << endl;
    print(adj);
    cout << endl;
    cout << "Промежуточные пути: ";
    for (int i = 0; i < way.size(); i++)
        cout << way[i].first << " -> " << way[i].second << "   ";
    cout << endl;
    return adj;
}

void Print_Result()     //выводится результат решения задачи, все отрезки путей соединяются 
{
    int elem = way[0].second;
    int i = 2;
    way1.push_back(way[0].first);
    way1.push_back(way[0].second);
    while (i != graph.GetAmountVerts() + 1)
        for (int j = 1; j < graph.GetAmountVerts(); j++)
            if (way[j].first == elem)
            {
                elem = way[j].second;
                way1.push_back(elem);
                i++;
            }
    cout << "Ответ: ";
    for (int i = 0; i < way1.size(); i++)
    {
        cout << way1[i];
        if (i != way1.size() - 1)
            cout << " -> ";
    }
    for (int i = 0; i < way.size(); i++)
    {
        int l = way[i].first;
        int c = way[i].second;
        sum += graph.GetWeight(l, c);
    }
    cout << endl << "Минимальное расстояние: " << sum << endl;;
}

struct vertCoord
{
    int x, y;
};
vertCoord vertC[20];

void setCoord(int i, int n) {
    int R_;
    int x0 = WinW / 2;
    int y0 = WinH / 2;
    if (WinW > WinH)
    {
        R = 5 * (WinH / 13) / n;
        R_ = WinH / 2 - R - 10;
    }
    else {
        R = 5 * (WinW / 13) / n;
        R_ = WinW / 2 - R - 10;
    }
    float theta = 2.0f * 3.1415926f * float(i) / float(n);
    float y1 = R_ * cos(theta) + y0;
    float x1 = R_ * sin(theta) + x0;
    vertC[i].x = x1;
    vertC[i].y = y1;
}

void drawText(int nom, int x1, int y1)
{
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    ostringstream ss;
    string s;
    ss.width(2);
    ss.precision(3);
    ss << (nom);
    s = ss.str();
    glRasterPos2i(x1 - 5, y1 - 5);
    for (int j = 0; j < s.length(); j++)
        glutBitmapCharacter(font, s[j]);
}

void drawText_2(vector<int> nom) {
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    string strin;
    ostringstream ss;
    ss.width(2);
    ss.precision(3);
    ss << (nom[0]);
    strin = ss.str();
    for (int i = 1; i < nom.size(); i++) {
        ostringstream ss;
        string s;
        ss.width(2);
        ss.precision(3);
        ss << (nom[i]);
        s = ss.str();
        strin = strin + "->" + s;
    }
    glRasterPos2i(2, WinH - 14);
    for (int j = 0; j < strin.length(); j++)
        glutBitmapCharacter(font, strin[j]);
}

void drawText_3(int nom) {
    GLvoid* font = GLUT_BITMAP_HELVETICA_18;
    string strin = "Path: ";
    ostringstream ss;
    ss.width(2);
    ss.precision(3);
    ss << (nom);
    strin = strin + ss.str();
    glRasterPos2i(2, WinH - 35);
    for (int j = 0; j < strin.length(); j++)
        glutBitmapCharacter(font, strin[j]);
}

void drawCircle(int x, int y, int R1) //рисуем круг в заданных координатах
{
    glColor3f(0.0, 0.0, 1.0);
    float x1, y1;
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y1 = R1 * cos(theta) + y;
        x1 = R1 * sin(theta) + x;;
        glVertex2f(x1, y1);
    }
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f);
    float x2, y2;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float theta = 2.0f * 3.1415926f * float(i) / float(360);
        y2 = R1 * cos(theta) + y;
        x2 = R1 * sin(theta) + x;
        glVertex2f(x2, y2);
    }
    glEnd();
}

void drawVertex(int n)
{
    int t = 0;
    for (int i = 0; i < n; i++) {
            drawCircle(vertC[i].x, vertC[i].y, R);
            drawText(i + 1, vertC[i].x, vertC[i].y);
    }
}

void drawLine(int text, int x0, int y0, int x1, int y1) //ребро ориентированный взвешенный граф
{
    glColor3i(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(x0, y0);
    glVertex2i(x1, y1);
    glEnd();
    drawText(text, (x0 + x1) / 2 + 10, (y0 + y1) / 2 + 10);

    float vx = x0 - x1;
    float vy = y0 - y1;
    float s = 1.0f / sqrt(vx * vx + vy * vy);
    vx *= s;
    vy *= s;
    x1 = x1 + R * vx;
    y1 = y1 + R * vy;

    glColor3i(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2f(x1, y1);
    glVertex2f(x1 + 10 * (vx + vy), y1 + 10 * (vy - vx));
    glVertex2f(x1 + 10 * (vx - vy), y1 + 10 * (vy + vx));
    glEnd();
}

template<class T>
void Graph<T>::DrawGraph()
{
    int n = vertList.size();
    for (int i = 0; i < n; i++)
    {
        setCoord(i, n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a = adjMatrix[i][j];
            if (a != 0)
            {
                drawLine(a, vertC[i].x, vertC[i].y, vertC[j].x, vertC[j].y);
            }
        }
    }
    drawVertex(n);
}

Graph<int> makeGraph() {
    int amountVerts, amountEdges, sourceVertex, targetVertex, edgeWeight; 
    cout << "Введите количество вершин графа: "; cin >> amountVerts; cout << endl; 
    cout << "Введите количество ребер графа: "; cin >> amountEdges; cout << endl; 
    for (int i = 1; i <= amountVerts; ++i) {
        int* vertPtr = &i; 
        graph.InsertVertex(*vertPtr); 
    }

    for (int i = 0; i < amountEdges; ++i) {
        cout << "Исходная вершина: "; cin >> sourceVertex; cout << endl;
        int* sourceVertPtr = &sourceVertex; 
        cout << "Конечная вершина: "; cin >> targetVertex; cout << endl; 
        int* targetVertPtr = &targetVertex; 

        cout << "Вес ребра: "; cin >> edgeWeight; cout << endl; 
        graph.InsertEdge(*sourceVertPtr, *targetVertPtr, edgeWeight);
    }
    cout << endl;
    graph.Print();
    int p;
    cout << "Задача коммивояжера" << endl;
    int** matrix = NewAdjMatrix();
    while(way.size() != graph.get_sizevert())
         matrix = TSP(matrix);
    Print_Result();
    return graph;
}


void reshape(int w, int h)
{
    WinW = w;
    WinH = h;
    glViewport(0, 0, (GLsizei)WinW, (GLsizei)WinH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, (GLdouble)WinW, 0, (GLdouble)WinH);
    glutPostRedisplay();
}

void display()
{
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, WinW, 0, WinH); //ставим начало координат в левый нижний угол
    glViewport(0, 0, WinW, WinH);
    glClearColor(0.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    graph.DrawGraph();
    drawText_2(way1);
    drawText_3(sum);

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Russian");
    glutInit(&argc, argv);
    graph = makeGraph();
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(900, 720);
    glutCreateWindow("Graph");
    WinW = glutGet(GLUT_WINDOW_WIDTH);
    WinH = glutGet(GLUT_WINDOW_HEIGHT);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

    return 0;
}