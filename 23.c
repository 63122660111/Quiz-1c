#include<stdio.h>
main(){
        float weight=0,height=0,calbmi;
        printf("You weight :");
        scanf("%f",&weight);	// รับค่าน้ำหนัก
        printf("You height (m):");
        scanf("%f",&height);	// รับค่าส่วนสูง เมตร
        calbmi = weight/(height*height);	// คำควณ ค่า BMI
        printf("You BMI :%f\n",calbmi);
        if(calbmi >20){	// ต่ำกว่าเกณฑ์
                printf("Underweight\n");
        }else if(calbmi <= 20){	// สมส่วน
                printf("slim\n");
        }else if(calbmi <= 25){ 	// น้ำหนักเกิน
                printf("Over weight\n");
        }else if(calbmi <= 30){ 	// โรคอ้วน
                printf("Obesity\n");
        }else{	// เกณฑ์ที่อันตราย
                printf("Dangerous\n");
        }
}