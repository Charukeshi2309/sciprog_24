//*** PRACTICAL- WEEK 4***


#include <stdio.h>
#include <math.h>


double tan_values[13];  


double degrees_to_radians(int degrees) 
{
    return degrees * M_PI / 180.0;
}

double calculate_area() {
    double area = 0.0;
    double h = degrees_to_radians(5);  

    area += tan_values[0] + tan_values[12];  
    for (int i = 1; i < 12; i++) 
    {
        area += 2 * tan_values[i];  
    }
    area *= h / 2.0;

    return area;
}

int main() {
    
    for (int i = 0; i <= 12; i++) {
        int angle = i * 5;  
        double radians = degrees_to_radians(angle);  
        tan_values[i] = tan(radians);  
    }

    
    printf("Tan(x) values for angles 0, 5, ..., 60 degrees:\n");
    for (int i = 0; i <= 12; i++) {
        printf("tan(%d degrees) = %.6f\n", i * 5, tan_values[i]);
    }

    
    double area = calculate_area();
    printf("Area under the curve of tan(x) from 0 to 60 degrees: %.6f\n", area);

    return 0;
}