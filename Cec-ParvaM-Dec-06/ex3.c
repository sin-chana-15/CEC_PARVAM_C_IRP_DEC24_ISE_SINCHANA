#include<stdio.h>
int main()
{
    int n1 =0, n2 = 1, fib=0;
    for(int i=1; i <= 10; i++)  
    {
        if (i == 1){               
            printf(" %d", n1);        // 0 1
        }else if (i == 2) {
            printf(" %d", n2);
        }else{
                
                fib = n1 + n2;         
                n1 = n2;                     
                n2 = fib;                     
                printf(" %d", fib);
        }
        
    }
   
    return 0;
}
