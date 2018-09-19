#include <emmintrin.h> //SSE2
#include <stdio.h> //In Out

__m128i max(__m128i v1, __m128i v2)
{
  __m128i res = _mm_max_epi16 (v1, v2); // Get the max from each column
  // Print the max
  int data;
  data = _mm_extract_epi16(res,0);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,1);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,2);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,3);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,4);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,5);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,6);
  printf("%d \t", data);
  data = _mm_extract_epi16(res,7);
  printf("%d \t", data);
  return res;
}

int main(){
  short v[16];
  int i = 0;
  int j = 0;
  // Read the values
  for (int k = 0; k<16;k++){
    if(i==2){
      i = 0;
      j++;
    }
    printf( "Enter the value of the row %d and the column %d: ",i,j);
    scanf("%hd", &v[k]);
    i++;
  }
  // Set the values to vectors
  __m128i v1 = _mm_set_epi16(v[14], v[12], v[10], v[8], v[6], v[4], v[2], v[0]);
  __m128i v2 = _mm_set_epi16(v[15], v[13], v[11], v[9], v[7], v[5], v[3], v[1]);
  max(v1,v2);
}
