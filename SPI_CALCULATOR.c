#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    printf("**********WELCOME TO SPI CALCULATOR**********\n\n");
    printf("INSTRUCTIONS:\n\n");
    printf("1.This SPI Calculator is designed for SEM-I of ICT Branches.\n");
    printf("2.Enter the marks of each subject as guided ahead and get your SPI.\n");
    printf("3.Enter the marks of TW/Viva if given otherwise enter by estimation.\n");
    printf("4.For Attendence follow the below Category table:\n");
    printf("80%% to 100%%   ->    Enter 1\n");
    printf("65%% to 79%%    ->    Enter 2\n");
    printf("50%% to 64%%    ->    Enter 3\n");
    printf("30%% to 49%%    ->    Enter 4\n");
    printf("0%% to 29%%     ->    Enter 5\n\n");

    char consent;
    int maths_s_1, maths_s_2, maths_s_3, maths_ext, maths_att, maths_total;
    int bee_s_1, bee_s_2, bee_s_3, bee_ext, bee_att, bee_tw, bee_total;
    int pps_s_1, pps_s_2, pps_s_3, pps_ext, pps_att, pps_tw, pps_total;
    int egd_tw, egd_total;
    int sw_tw, sw_total;

    float maths_gp, bee_gp, pps_gp, egd_gp, sw_gp;
    float SPI;

    printf("Enter 'Y' to proceed or 'N' to Exit: ");
    scanf("%c", &consent);
    if (consent == 'Y')
    {
        // Getting Details of MATHEMATICS-I
        printf("\n\nMATHEMATICS-I\n");
        printf("Enter Three Sessionals Marks: ");
        scanf("%d %d %d", &maths_s_1, &maths_s_2, &maths_s_3);
        printf("Enter External Marks: ");
        scanf("%d", &maths_ext);
        printf("Enter Attendence Category: ");
        scanf("%d", &maths_att);

        // Getting Details of BEE
        printf("\n\nBASIC ELECTRICAL ENGINEERING\n");
        printf("Enter Three Sessionals Marks: ");
        scanf("%d %d %d", &bee_s_1, &bee_s_2, &bee_s_3);
        printf("Enter External Marks: ");
        scanf("%d", &bee_ext);
        printf("Enter TW/VIVA Marks out of 50: ");
        scanf("%d", &bee_tw);
        printf("Enter Attendence Category: ");
        scanf("%d", &bee_att);

        // Getting Details of PPS
        printf("\n\nPROGRAMMING FOR PROBLEM SOLVING-I\n");
        printf("Enter Three Sessionals Marks: ");
        scanf("%d %d %d", &pps_s_1, &pps_s_2, &pps_s_3);
        printf("Enter External Marks: ");
        scanf("%d", &pps_ext);
        printf("Enter TW/VIVA Marks out of 50: ");
        scanf("%d", &pps_tw);
        printf("Enter Attendence Category: ");
        scanf("%d", &pps_att);

        // Getting Details of EGD
        printf("\n\nENGINEERING GRAPHICS AND DESGIN\n");
        printf("Enter TW/VIVA Marks out of 100: ");
        scanf("%d", &egd_tw);

        // Getting Details of SW
        printf("\n\nSOFTWARE WORKSHOP\n");
        printf("Enter TW/VIVA marks out of 50: ");
        scanf("%d", &sw_tw);

        // Calculating total marks of each subjects
        maths_total = ((maths_s_1 + maths_s_2 + maths_s_3) / 3) + maths_ext + (5 - maths_att);
        bee_total = ((bee_s_1 + bee_s_2 + bee_s_3) / 3) + bee_ext + bee_tw + (5 - bee_att);
        pps_total = ((pps_s_1 + pps_s_2 + pps_s_3) / 3) + pps_ext + pps_tw + (5 - pps_att);
        egd_total = egd_tw;
        sw_total = sw_tw;

        // Calculating Grade Points for each subjects
        maths_gp = maths_total / 10.0;
        bee_gp = bee_total / 15.0;
        pps_gp = pps_total / 15.0;
        egd_gp = egd_total / 10.0;
        sw_gp = sw_total / 5.0;

        // Calculating SPI
        SPI = ((maths_gp * 4) + (bee_gp * 5) + (pps_gp * 5.5) + (egd_gp * 3) + (sw_gp * 1)) / 18.5;

        printf("\n**********YOUR SPI IS %f!**********\n\n", SPI);
    }
    else
    {
        exit(0);
    }
}