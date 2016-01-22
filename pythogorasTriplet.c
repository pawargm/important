 #include<stdio.h>


void main()
{
int side1, side2, hyp;
//cout<< " \n Pythagorean triples between 1 to 100 :\n\n ";
for( side1 = 1; side1<=100 ; side1 ++)
  for( side2 = 1; side2<=100 ; side2 ++)
      for( hyp = 1; hyp<=100 ; hyp ++)
              if((side1*side1 + side2*side2) == hyp * hyp )
                 printf("%d% d% d\n",hyp,side2,side1);
 

}
