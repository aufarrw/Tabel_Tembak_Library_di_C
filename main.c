#include <stdio.h>
#include <windows.h>

int main(){
	
	HANDLE lib;
	//function untuk menghitung sudut elevasi adalah "parabol_asin"
	double (*parabol_asin) (double, double);
	
	lib = LoadLibrary("ParabolMortar.dll");
	
	if (lib > (void*) HINSTANCE_ERROR){
		parabol_asin = (double(*) (double, double)) GetProcAddress(lib, "parabol_asin");
		
		double a;
		char c = 'y';
		while(c == 'y'){
			printf("Masukkan Jarak: ");
			scanf("%lf", &a);
	
			if (a < 100){
				printf("Jarak terlalu dekat dengan mortar");
			}
			
			else if (a <= 450){
			double b = 67.08204;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 0\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 800){
			double b = 89.44272;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 1\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 1350){
			double b = 116.18951;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 2\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 2600){
			double b = 161.24516;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 3\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 3700){
			double b = 192.35385;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 4\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 4700){
			double b = 216.79484;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 5\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 5600){
			double b = 236.643193;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 6\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 6300){
			double b = 250.99801;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 7\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else if (a <= 6500){
			double b = 254.95098;
			printf("jarak: %.2lf\n", a);
			printf("kecepatan: %.2lf\n", b);
			printf("isian: 8\n");
			printf("sudut elevasi: %.2lf", parabol_asin(a, b));
			}
			
			else{
				printf("Jarak tidak dapat tercapai");
			}
			
				
			printf("\nmembidik lagi?(y/n) ");
			scanf(" %c", &c);
		        if (c == 'n') {
		            break;
		        }
		    	else if (c!='y' && c!='n'){
		    		printf("%c tidak terdaftar, harap input 'y' atau 'n'", c);
		    		while(c!='y' && c!='n'){
		    		printf("\nmembidik lagi?(y/n) ");
					scanf(" %c", &c);
				        if (c == 'n') {
				            break;
				        }
				    	else if (c!='y' && c!='n'){
				    		printf("%c tidak terdaftar, harap input 'y' atau 'n'", c);
						}
					}
				}
		}
	}
	else{
		printf("\"ParabolMortar.dll\" gagal diakses");
	}
	return 0;
}