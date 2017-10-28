#include <stdio.h>
#include <string.h>

int main()
{char division[15];

    while(1){printf("Enter division name (write end to terminate) : ");
    scanf("%s",division);
    if(strcmp(division,"end")==0){
        break;
    }
    if(strcmp(division,"dhaka")==0){
        printf("1.Dhaka          1,463.60(sq km)\n2.Faridpur          2,052.68(sq km)\n3.Gazipur          1,806.36(sq km)\n4.Gopalganj          1,468.74(sq km)\n5.Jamalpur          2,115.16(sq km)\n6.Kishoreganj          2,688.59(sq km)\n7.Madaripur          1,125.69(sq km)\n8.Manikganj          1,383.66(sq km)\n9.Munshiganj          1,004.29(sq km)\n10.Mymensingh          4,394.57(sq km)\n11.Narayanganj          684.37(sq km)\n12.Narsingdi          1,150.14(sq km)\n13.Netrokona          2,794.28(sq km)\n14.Rajbari          1,092.28(sq km)\n15.Shariatpur          1,174.05(sq km)\n16.Sherpur          1,364.67(sq km)\n17.Tangail          3,414.35(sq km)\n\n");

    }
    if(strcmp(division,"chittagong")==0){
        printf("1.Comilla          3,146.30(sq km)\n2.Chandpur          1,645.32(sq km)\n3.Lakshmipur          1,440.39(sq km)\n4.Noakhali          3,685.87(sq km)\n5.Feni Sadar          990.36(sq km)\n6.Chittagong          5,282.92(sq km)\n7.Khagrachhari          2,749.16(sq km)\n8.Rangamati          6,116.11(sq km)\n9.Bandarban          4,479.01(sq km)\n10.Cox's Bazar          2,491.85(sq km)\n11.Brahmanbaria          1,881.20(sq km)\n\n");
    }
    if(strcmp(division,"barisal")==0){
        printf("1.Barisal          2,784.52(sq km)\n2.Barguna          1,831.31(sq km)\n3.Bhola          3,403.48(sq km)\n4.Jhalokati          706.76(sq km)\n5.Patuakhali          3,221.31(sq km)\n6.Pirojpur          1,277.80(sq km)\n(sq km)\n");
    }
    if(strcmp(division,"khulna")==0){
        printf("1.Bagerhat          3,959.11(sq km)\n2.Chuadanga          1,174.10(sq km)\n3.Jessore          2,606.94(sq km)\n4.Jhenaidah          1,964.77(sq km)\n5.Khulna          4,394.45(sq km)\n6.Kushtia          1,608.80(sq km)\n7.Magura          1,039.10(sq km)\n8.Meherpur          751.62(sq km)\n9.Narail          967.99(sq km)\n10Satkhira          3,817.29(sq km)\n\n");
    }
    if(strcmp(division,"rajshahi")==0){
        printf("1.Bogra          2,898.68(sq km)\n2.Jaipurhat          965.4(sq km)\n3.Naogaon          3,435.65(sq km)\n4.Natore          1,900.19(sq km)\n5.Nawabganj          1,702.55(sq km)\n6.Pabna          2,371.50(sq km)\n7.Rajshahi          2,407.01(sq km)\n8.Sirajganj          2,497.95(sq km)\n\n");
    }
    if(strcmp(division,"rangpur")==0){
        printf("1.Dinajpur          3,444.30(sq km)\n2.Gaibandha          2,114.77(sq km)\n3.Kurigram          2,296.10(sq km)\n4.Lalmonirhat          1,247.37(sq km)\n5.Nilphamari          1,546.59(sq km)\n6.Panchagarh          1,404.62(sq km)\n7.Rangpur          2,370.45(sq km)\n8.Thakurgaon          1,781.74(sq km)\n\n");
    }
    if(strcmp(division,"sylhet")==0){
        printf("1.Habiganj          2,636.59(sq km)\n2.Moulvibazar          2,799.38(sq km)\n3.Sunamganj          3,669.58(sq km)\n4.Sylhet          3,452.07(sq km)\n\n");
    }}
    return 0;
}
