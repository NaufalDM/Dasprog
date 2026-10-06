#include<stdio.h>

int get_problem();
void get_rate_drop_factor(double *rate, double *drop_factor);
void get_kg_rate_conc(double *rate, double *weight, double *conc);
void get_units_conc(double *rate, double *conc);
int fig_drops_min(double rate, double drop_factor);
int fig_ml_hr(double hours);
int by_weight(double rate, double weight, double conc);
int by_units(double rate, double conc);

int main()
{
	int problem;
	problem = get_problem();
	while(problem!=5)
	{
		if(problem ==1)
		{
			double rate,drop_factor;
			get_rate_drop_factor(&rate,&drop_factor);
			printf("The drop rate per minute is %d.\n", fig_drops_min(rate,drop_factor));
		}
		else if(problem== 2)
		{
			double hours;
			printf("Enter number of hours=> ");
			scanf("%lf",&hours);
			printf("The rate in milliliters per hour is %d.\n", fig_ml_hr(hours));
		}
		else if(problem == 3)
		{
			double rate,weight,conc;
			get_kg_rate_conc(&rate, &weight,&conc);
			printf("The rate in milliliters per hour is %d.\n", by_weight(rate,weight,conc));
		}
		else if(problem == 4)
		{
			double rate,conc;
			get_units_conc(&rate,&conc);
			printf("The rate in milliliters per hour is %d.\n", by_units(rate,conc));
		}
		printf("\n");
		problem = get_problem();
	}
	return 0;
}
int get_problem()
{
	int pilihan = 0;
	while(pilihan< 1 || pilihan > 5)
	{
		printf("Enter the number of the problem you wish to solve\n");
		printf("    GIVEN A MEDICAL ORDER IN              CALCULATE RATE IN\n");
		printf("(1) ml/hr & tubing drop factor            drops / min\n");
		printf("(2) 1 L for n hr                          ml / hr\n");
		printf("(3) mg/kg/hr & concentration in mg/ml     ml / hr\n");
		printf("(4) units/hr & concentration in units/ml  ml / hr\n");
		printf("(5) QUIT\n");
		printf("\nProblem=> ");
		scanf("%d",&pilihan);
		printf("\n");
	}
	return pilihan;
}
// pakai *sebelum nilai yang perlu direturn ke main agar bisa return lebih dari 1 nilai, jika hanya perlu 1 nilai, pakai return saja bisa
void get_rate_drop_factor(double *rate, double *drop_factor)
{
	printf("Enter rate in ml/hr=> ");
	scanf("%lf", rate);
	printf("Enter tubing's drop factor(drops/ml)=> ");
	scanf("%lf",drop_factor);
}
void get_kg_rate_conc(double *rate, double *weight, double *conc)
{
	printf("Enter rate in mg/kg/hr=> ");
	scanf("%lf", rate);
	printf("Enter patient weight in kg=> ");
	scanf("%lf",weight);
	printf("Enter concentration in mg/ml=> ");
	scanf("%lf",conc);
}
void get_units_conc(double *rate, double *conc)
{
	printf("Enter rate in units/hr=> ");
	scanf("%lf",rate);
	printf("Enter concentration in units/ml=> ");
	scanf("%lf",conc);
}
int fig_drops_min(double rate,double drop_factor)
{
	double hasil = rate*drop_factor/60.0;
	return (int)(hasil + 0.5);
}
int fig_ml_hr(double hours)
{
	double hasil =1000.0/ hours;
	return (int)(hasil+0.5);
}
int by_weight(double rate,double weight,double conc)
{
	double hasil = rate*weight / conc;
	return (int)(hasil+ 0.5);
}

int by_units(double rate,double conc)
{
	double hasil = rate/conc;
	return (int)(hasil + 0.5);
}
