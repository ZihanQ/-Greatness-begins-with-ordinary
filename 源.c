//第七章编程练习
#include<stdio.h>
/*第七章
1：
int main()
{
	char ch;
	int space, change,words;
	space = change = words = 0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			change++;
		else
			words++;
	}
	printf("end\n");
	printf("a:%d,b:%d,c:%d", space ,change, words);
	return 0;
}
*/
/*2:
int main(void)
{
	int counter=0;
	char ch;
	printf("Please input chars (# for exit):");
	while((ch=getchar())!=0)
	{
		if (counter++ % 8 == 0)
			printf("\n");
		if (ch == '\n')
			printf("'\\n'-%0.3d.", ch);
		//防止输入的回车（Enter）键被打印出来（这导致意外的换行）
		if (ch == '\t')
			printf("'\\t'-%0.3d", ch);
		else printf("'%c'-%0.3d", ch, ch);
	}
	printf("End\n");
	return 0;
}
*/
/*3:
int main(void)
{
	int t,t1,t2,left,right;
	t1 = t2 = left = right = 0;
	printf("Please input numbers(0 to quit):");
	while (scanf_s("%d", &t), t != 0)
		if (t % 2 == 0)//偶数
		{
			t2 += t;
			right++;
		}
		else//奇数
		{
			t1 += t;
			left++;
		}
	printf("Left has %d numbers in total.\n", left);
	printf("The left average is %d\n", t1/left);
	printf("Right has %d numbers in total.\n", right);
	printf("The right average is %d", t2/right);
	return 0;
}
*/
/*5:
int main(void)
{
	int substitution,index;
	char ch;
	while((ch=getchar())!='#')
		switch (ch)
		{
		case'.':
			putchar('!');
			break;
		case'!':
			printf("!!");
			break;
		default:
			putchar(ch);
		}
	printf("end");
	return 0;
}
*/
/*6:
int main(void)
{
	char ch;
	int ans = 0;
	bool tx;
	//用（bool）tx来记录前一字母状态（若为e则true，若不为e则false）
	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			tx=true;
			continue;
		}
		else if (ch == 'i' && tx == true)
		{
			ans++;
			tx=false;
		}
		else
			tx = false;
	}
	printf("there are %d ei at all", ans);
	return 0;
}
*/
/*8:
#define perwage1 8.75
#define perwage2 9.33
#define perwage3 10.00
#define perwage4 11.20
void a(double perwage,double hours);
void show_menu(void);
int main(void)
{
	int judge;
	double perwage,hours;
	show_menu();
	again:printf("Yours:_____(1-5)\b\b\b\b\b\b\b\b\b\b");
	scanf_s("%d", &judge);
	printf("Please input your work hours:_____\b\b\b\b\b");
	scanf_s("%lf", &hours);
	switch (judge)
	{
	case 1:
	{perwage = perwage1;
	a(perwage,hours);
	break;
	}
	case 2:
	{perwage = perwage2;
	a(perwage, hours);
	break;
	}
	case 3:
	{perwage = perwage3;
	a(perwage, hours);
	break;
	}
	case 4:
	{perwage = perwage4;
	a(perwage, hours);
	break;
	}
	case 5:
		goto end;
	default:
		printf("try again(please remember only1-5)\n");
		goto again;
	}
	end:printf("end");
	return 0;
}


//函数1：计算
void a(double perwage,double hours)
{
	double salary,finance,final;
	if (hours <= 40)
		salary = perwage * hours;
	else
	{
		hours = 40 + (hours - 40) * 1.5;
		salary = perwage * hours;
	}
	if (salary <= 300)
		finance = salary * 0.15;
	else if (salary <= 450 && salary > 300)
		finance = 45 + (salary - 300) * 0.2;
	else
		finance = 75 + (salary - 450) * 0.25;
	final = salary - finance;
	printf("your salary:%.2lf\nyour finance:%.2lf\nyour final:%.2lf\n", salary, finance, final);
}
//函数2：显示头部案例
void show_menu(void)//显示页面
{
	int index;
	for (index = 1; index < 70; index++)
		printf("*");
	printf("\nEnter the number corresponding to the desired pay rate or action\n");
	printf("1)$8.75/hr             2)$9.33/hr\n");
	printf("3)$10.00/hr            4)$11.20/hr\n");
	printf("5)qiut\n");
	for (index = 1; index < 70; index++)
		printf("*");
	printf("\n");
}
*/
/*9:
int main(void)
{
	int t,index,tx,ta;
	int ans[100];
	int num;
	printf("Here(2 to quit):");
	while (scanf_s("%d", &t), t >= 2)
	{
		num = 1;
		if (t >= 3)
		{
			ans[0] = 2;
			for (tx = 3; tx <= t; tx++)//对小于等于它的数进行一个个检查
			{
				for (index = 2; index < tx; index++)//具体检查过程：通过一个个%来计算
				{
					if (tx % index != 0)
						continue;
					else
						goto win;
				}
				ans[num] = tx;
				num++;
			win:;
			}
			printf("IT:");
			for (ta = 0; ta < num; ta++)
				printf("%d ", ans[ta]);
			printf("\nHere:");
		}
		else
			printf("IT:2\n");
	}
	return 0;
}
*/

#define y 2.05
#define t 1.15
#define h 1.09
int main(void)
{
	char ch;
	int yang, tian, hu, yang0, tian0, hu0;
	float weight, vegetableprice, listprice, totalprice, discount, transportprice;
	discount = 0;
	yang = tian = hu = 0;
	printf("We have three kinds of vegetables\n");
	printf("a)洋蓟($2.05/pound      b)甜菜($1.15/pound)      c)胡萝卜($1.09/pound)\n");
	printf("So, what do you want?");
	//
begin:
	while ( (ch=getchar())!= 'q')
	{
		if (ch == '\n') 
			continue;

		switch (ch)
		{
		case 'a':
			printf("How much yangji do you want?\n");
			scanf_s("%d", &yang0);
			yang += yang0;

			break;
		case'b':
			printf("How much tiancai do you want?\n");
			scanf_s("%d", &tian0);
			tian += tian0;

			break;
		case 'c':
			printf("How much huluobo do you want?\n");
			scanf_s("%d", &hu0);
			hu += hu0;

			break;
		default:
			printf("NO!NO!NO!\nYou can only choose a or b or c or q\n");
			printf("Please input again:");
			goto begin;
		}
		printf("Any more vegetables?\n");	
	}
	//
	weight = (float)(yang + tian + hu);
	vegetableprice = y * yang + t * tian + h * hu;
	//
	if (vegetableprice >= 100)
	{
		discount = vegetableprice * 0.05;
		listprice = vegetableprice * 0.95;
	}
	else
		listprice = vegetableprice;
	if (weight <= 5)
		transportprice = 6.5;
	else if (weight <= 20)
		transportprice = 14;
	else
		transportprice = 14 + (weight - 20) * 0.5;
	//
	totalprice = vegetableprice + transportprice - discount;

	printf("Weight:%.2f pounds\nvegetableprice:%.2f\n", weight, vegetableprice);
	printf("transportprice:%.2f\ndiscount:%.2f\n", transportprice, discount);
	printf("listprise:%.2f\ntotalprice:%.2f\n", listprice, totalprice);
	return 0;
}

