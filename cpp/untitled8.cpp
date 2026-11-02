#include <stdio.h>
int main()
{
	double income,deduction,taxable,tax=0.0,percent = 0.0;
	scanf("%lf %lf",&income,&deduction);
	taxable = income - 60000.0 - deduction;
	if (taxable <= 0)
	{tax = 0.0;
	}
	else if (taxable <= 36000)
	{
		tax =taxable*0.03 - 0;
	}
	else if (taxable <=144000 )
	{
		tax =taxable * 0.10 -2520;
	}
	else if (taxable <= 300000)
	{
		tax = taxable * 0.20 - 16920;
	}
	else if (taxable <= 420000)
	{
		tax = taxable * 0.25 -31920;
	}
	else if (taxable <= 660000)
	{
		tax = taxable *0.30 -52920;
	}
	else if (taxable <= 960000)
	{
		tax = taxable * 0.35 - 85920;
	}
	else 
	{
		tax = taxable * 0.45 - 181920;
	}
	if (income > 0)
	{
		percent = (tax / income) * 100.0;
	}
	printf("%.2f %.0f%%\n",tax,percent);
	return 0;
}
