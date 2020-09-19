# include <stdio.h>

int height;
int i;
int x;

int main(){
   while (!(0 < height && height <= 23)) {
      printf("Enter height: ");
      while (scanf("%d", &height) == 0) {
         printf("Invalid input. Try again\nEnter height: ");
         int c;
         while((c=getchar())!='\n' && c!=EOF);
      }
      if (!(0 < height && height <= 23)) {
         printf("Enter a number within the range of 1-23\n");
      }
   }

   for (i = 1; i < (height + 1); ++i) {
      for (x = 0; x < (height - i); ++x) {
         printf(" ");
      }
      for (x = 1; x < i+1; ++x) {
         printf("#");
      }
      printf("#\n");
   }

   return 0;
}
