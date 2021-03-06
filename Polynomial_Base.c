/****************************************************************************
 * \brief       implementation of base.h
 * \copyright   2018-2019, Zhejiang University, Program Design Project, Group 6. 
 * \verson      1.2
 * \author      Fang
 * \file        Polynomial_Base.c
 * 
 * \date 2019/03/25 Fang :created
****************************************************************************/

#include "Polynomial_Base.h" 


extern int32_t Powercmp(Poterm term_1,Poterm term_2)
{
	double power_1,power_2;
	power_1=term_1->x+term_1->y; 
	power_2=term_2->x+term_2->y;
	if(power_1>power_2)return 1;
	if(power_1<power_2)return -1;
	if(term_1->x>term_2->x)return 1;
	if(term_1->x<term_2->x)return -1;
	return 0;
}


extern void Creat(Poterm TermTobeAdd,int32_t Powerx,int32_t Powery,double Cofficient)
{
	Poterm Newterm;
	Newterm=(Poterm)malloc(sizeof(struct Term));
	Newterm->x=Powerx;
	Newterm->y=Powery;
	Newterm->co=Cofficient;
	Newterm->next=TermTobeAdd->next;
	TermTobeAdd->next=Newterm;
}
