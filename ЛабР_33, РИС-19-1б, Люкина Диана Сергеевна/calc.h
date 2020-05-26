#pragma once
#include<iostream>
#include <math.h>

class calc {
	float credit;                   //кредит
	float perc;                     //процентна€ ставка
	int month;                      //срок кредитовани€
	float ann_payment;              //аннуитентный платеж
	float perc1;                    //измен€емый процент
	int month1;                     //с какого именно мес€ца измен€етс€ процентна€ ставка
	int month2;                     //с какого именно мес€ца измен€етс€ срок выплаты
	int month3;                     //измен€емый срок 
public:
	float total_amount = 0;             //обща€ сумма кредита с процентами
	float overpayment = 0;              //переплата

	calc() {
		credit = 0;
		perc = 0;
		month = 0;
		ann_payment = 0;
		perc1 = 0;
		month1 = 0;
		month2 = 0;
		month3 = 0;
	}
	~calc(){}

	float get_credit() { return credit; }
	void set_credit(float k) { credit = k; }
	float get_perc() { return perc; }
	void set_perc(float k) { perc = k; }
	int get_month() { return month; }
	void set_month(int k) { month = k; }
	float get_ann_payment() { return ann_payment; }
	void set_ann_payment(float k) { ann_payment = k; }
	float get_perc1() { return perc1; }
	void set_perc1(float k) { perc1 = k; }
	int get_month1() { return month1; }
	void set_month1(int k) { month1 = k; }
	int get_month2() { return month2; }
	void set_month2(int k) { month2 = k; }
	int get_month3() { return month3; }
	void set_month3(int k) { month3 = k; }

	//‘ормула расчета аннуитентного платежа по кредиту
	void annuity(float dolg) {
		float Mpc = perc / 100 / 12;
		ann_payment = dolg * (Mpc / (1 - pow(1 + Mpc, (-month))));
	}
	//cчитаем только с основными данными
	void sum() {
		annuity(credit);
		total_amount = ann_payment * month;
		overpayment = total_amount - credit;
	}
	//только с изменением процентной ставки
	void sum1() {
		float zadoljnost = credit;
		float body_cred;
		float month_percent;
		annuity(zadoljnost);
		for (int i = 1; i < month1; i++) {
			month_percent = zadoljnost * (perc / 100 / 12);
			body_cred = ann_payment - month_percent;
			zadoljnost -= body_cred;
		}
		total_amount = ann_payment * (month1 - 1);

		perc = perc1;
		month = month - month1 + 1;
		annuity(zadoljnost);
		float total_amount1 = ann_payment * month;
		total_amount += total_amount1;
		overpayment = total_amount - credit;
	}
	//только с изменением срока выплаты кредита
	void sum2() {
		float zadoljnost = credit;
		float body_cred;
		float month_percent;
		annuity(zadoljnost);
		for (int i = 1; i < month2; i++) {
			month_percent = zadoljnost * (perc / 100 / 12);
			body_cred = ann_payment - month_percent;
			zadoljnost -= body_cred;
		}
		total_amount = ann_payment * (month2 - 1);
		month = month3 - month2 + 1;
		annuity(zadoljnost);
		float total_amount1 = ann_payment * month;
		total_amount += total_amount1;
		overpayment = total_amount - credit;
	}
	//изменение и процентной ставки, и срока выплаты кредита
	void sum3() {
		if (month1 == month2) {
			float zadoljnost = credit;
			float body_cred;
			float month_percent;
			annuity(zadoljnost);
			for (int i = 1; i < month1; i++) {
				month_percent = zadoljnost * (perc / 100 / 12);
				body_cred = ann_payment - month_percent;
				zadoljnost -= body_cred;
			}
			total_amount = ann_payment * (month1 - 1);
			month = month3 - month1 + 1;
			perc = perc1;
			annuity(zadoljnost);
			float total_amount1 = ann_payment * month;
			total_amount += total_amount1;
			overpayment = total_amount - credit;
		}
		if (month1 > month2) {
			float zadoljnost = credit;
			float body_cred;
			float month_percent;
			annuity(zadoljnost);
			for (int i = 1; i < month2; i++) {
				month_percent = zadoljnost * (perc / 100 / 12);
				body_cred = ann_payment - month_percent;
				zadoljnost -= body_cred;
			}
			total_amount = ann_payment * (month2 - 1);
			month = month3 - month2 + 1;
			annuity(zadoljnost);
			for (int i = 1; i <= (month1 - month2); i++) {
				month_percent = zadoljnost * (perc / 100 / 12);
				body_cred = ann_payment - month_percent;
				zadoljnost -= body_cred;
			}
			float total_amount1 = ann_payment * (month1 - month2);
			total_amount += total_amount1;
			month = month3 - month1 + 1;
			perc = perc1;
			annuity(zadoljnost);
			float total_amount2 = ann_payment * month;
			total_amount += total_amount2;
			overpayment = total_amount - credit;
		}
		if (month1 < month2) {
			float zadoljnost = credit;
			float body_cred;
			float month_percent;
			annuity(zadoljnost);
			for (int i = 1; i < month1; i++) {
				month_percent = zadoljnost * (perc / 100 / 12);
				body_cred = ann_payment - month_percent;
				zadoljnost -= body_cred;
			}
			total_amount = ann_payment * (month1 - 1);
			month -= (month1 + 1);
			perc = perc1;
			annuity(zadoljnost);
			for (int i = 1; i <= (month2 - month1); i++) {
				month_percent = zadoljnost * (perc / 100 / 12);
				body_cred = ann_payment - month_percent;
				zadoljnost -= body_cred;
			}
			float total_amount1 = ann_payment * (month2 - month1);
			total_amount += total_amount1;
			month = month3 - month2 + 1;
			annuity(zadoljnost);
			float total_amount2 = ann_payment * month;
			total_amount += total_amount2;
			overpayment = total_amount - credit;
		}
	}
};