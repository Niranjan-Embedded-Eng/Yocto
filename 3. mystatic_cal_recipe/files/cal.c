/********************************************************************************************************
 * © 2022 PHYTEC EMBEDDED PVT LTD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with PHYTEC. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 *
 * For further information, contact PHYTEC EMBEDDED Pvt Ltd.
 *******************************************************************************************************/
/*******************************************************************************************************/
/*      Application: Static calucalator
 *
 *      Brief: This Application is a simple calculator
 *      
 *      Author: Niranjan R Sansuddi
 */
/********************************************************************************************************/
#include <stdio.h>
#include "lib_cal.h"

int main()
{	
	int a,b;
	int Option;
	printf("Please Select Your Option :\n1 -- Addition\n2--Subtarction\n3--Multiplication\n4--Division\n");
	scanf("%d",&Option);
	if(Option == 1)
	{
		printf("Please Enter Your First Number :\n");
		scanf("%d",&a);
		printf("Please Enter Your Second Number : \n");
		scanf("%d",&b);
		int x = add(a,b);
		print(x,a,b,Option);
	}
	else if(Option == 2)
	{
		printf("Please Enter Your First Number :\n");
                scanf("%d",&a);
                printf("Please Enter Your Second Number : \n");
                scanf("%d",&b);
		int y = sub(a,b);
		print(y,a,b,Option);
	}
	else if(Option == 3)
	{
		printf("Please Enter Your First Number :\n");
                scanf("%d",&a);
                printf("Please Enter Your Second Number : \n");
                scanf("%d",&b);
		int k = mul(a,b);
		print(k,a,b,Option);
	}
	else if(Option == 4)
	{
		printf("Please Enter Your First Number :\n");
                scanf("%d",&a);
                printf("Please Enter Your Second Number : \n");
                scanf("%d",&b);
		int m = div(a,b);
		print(m,a,b,Option);
	}

	return 0;
} 



