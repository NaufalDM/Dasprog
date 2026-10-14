#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20

int get_corners(FILE *infile, double x[], double y[], int max_size)
{
    int count = 0;
    double tx, ty;
    while (fscanf(infile, "%lf %lf", &tx, &ty) == 2)
    {
        if (count < max_size)
        {
            x[count] = tx;
            y[count] = ty;
            count++;
        }
    }
    return count;
}
void output_corners(FILE *outfile, double x[], double y[], int size)
{
    fprintf(outfile, "%8s %8s\n", "x", "y");
    for (int i = 0; i < size; i++)
    {
        fprintf(outfile, "%8.2f %8.2f\n", x[i], y[i]);
    }
}
double polygon_area(double x[], double y[], int size)
{
    double sum = 0.0;

    for (int i = 0; i < size - 1; i++)
    {
        sum += (x[i + 1] + x[i]) * (y[i + 1] - y[i]);
    }
    return fabs(sum) / 2.0;
}



int main()
{
    double x[MAX_SIZE], y[MAX_SIZE];
    int n;

    FILE *infile = fopen("polygon_in.txt", "r");
    if (infile == NULL)
    {
        printf("File polygon_in.txt tidak bisa dibuka.\n");
        return 1;
    }
    
    n = get_corners(infile, x, y, MAX_SIZE);
    fclose(infile);

    FILE *outfile = fopen("polygon_out.txt", "w");
    if (outfile == NULL)
    {
        printf("File polygon_out.txt tidak bisa dibuat.\n");
        return 1;
    }

    output_corners(outfile, x, y, n);
    fclose(outfile);

    printf("Jumlah titik : %d\n", n);
    printf("Luas poligon : %.2f satuan luas\n", polygon_area(x, y, n));

    return 0;
}
