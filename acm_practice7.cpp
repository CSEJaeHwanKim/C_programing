#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   int myTime, yourTime;
   double mySpeed, yourSpeed, result;
   int direction;

   while(scanf("%d %d %d", &direction, &myTime, &yourTime) != EOF)
   {
      //printf("%d %d %d\n", direction, myTime, yourTime);
      mySpeed = (double)10 / myTime;
      yourSpeed = (double)10 / yourTime;

      if(direction == 1)
	  {
         if(mySpeed > yourSpeed){
            result = (double)10 / (mySpeed - yourSpeed);
         }
         else if(mySpeed == yourSpeed){
            printf("-1\n");
            continue;
         }
         else{
            result = (double)-10 / (mySpeed - yourSpeed);
         }
      }
      else if(direction == 0){
         result = (double)10 / (mySpeed + yourSpeed);
      }

      printf("%.2lf\n", result);
   }

   return 0;
}

