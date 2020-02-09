#include<stdio.h>
float FIRST_ALLOWANCE_RATE=0.50;
float NEXT1_ALLOWANCE_RATE=0.45;
float NEXT2_ALLOWANCE_RATE=0.40;
float REM_ALLOWANCE_RATE=0.35;

float travellingAllowanceCheck(int km)
{
    int remaining_distance=0;
    float allowance=0.0;

    // Case1
    if(km >= 0)
    {
        if(km <=500)
        {
            allowance +=km*FIRST_ALLOWANCE_RATE;
        }
        else
        {
            allowance +=500*FIRST_ALLOWANCE_RATE;
            remaining_distance=km - 500;
        }
    }

    // Case2
    if(km >=501)
    {
        if(remaining_distance <=1000)
        {
            allowance +=remaining_distance*NEXT1_ALLOWANCE_RATE;
        }
        else
        {
            allowance +=1000*NEXT1_ALLOWANCE_RATE;
            remaining_distance=remaining_distance - 1000;
        }
        
    }

    // Case3
    if(km >= 1001)
    {
        if(remaining_distance <= 1700)
        {
            allowance +=remaining_distance*NEXT2_ALLOWANCE_RATE;
        }
        else
        {
             allowance +=1700*NEXT2_ALLOWANCE_RATE;
            remaining_distance=remaining_distance - 1700;
        }
    }

    // Case4
    if(remaining_distance >= 1701)
    {
        allowance +=remaining_distance*REM_ALLOWANCE_RATE;
    }

    return allowance;

}
int main()
{
    int km;
    printf("\nEnter distance travelled(km): ");
    scanf("%d",&km);
    printf("\nTravelling Allowance(RM): %.2f\n",travellingAllowanceCheck(km));
    return 0;
}

/**
Input1: 650
1st  500 = (500 * .50) = 250
2nd  150 = (150 * .45) = 67.5
-----------------------------------
                 Total = 317.5

Input2: 650
1st  3 = (3 * .50) = 1.50
-----------------------------------
             Total = 1.50

Input3: 3000
1st   500 = ( 500 * .50 ) = 250
2nd  1000 = ( 100 * .45 ) = 450
3rd  1500 = (1500 * .40 ) = 600
------------------------------------
                   Total = 1300    **/
