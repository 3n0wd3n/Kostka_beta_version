#include <stdio.h>

unsigned char pole[5];
char segment[] = {
                  0b01001111,
                  0b00010010,
                  0b00000110,
                  0b01001100,
                  0b00100100,
                  0b00100000,

};

int main(void) {
  for (int i = 0; i < 6; i++) {
      printf("%02X\n", segment[i] );
}
int i = 0;
while (1){
  printf("%02X\n", segment[i++] );
  if (i > 6){
    i = 0;
  }
} //nekonečná smyčka
}

/*int main(void) {
  printf("%02X\n", segment[0]);
  printf("%02X\n", segment[1]);
  printf("%02X\n", segment[2]);

};
*/
