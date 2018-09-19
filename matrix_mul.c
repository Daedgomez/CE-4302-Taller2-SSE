#include <smmintrin.h> //SSE4.1
#include <stdio.h> //In Out
#include <time.h>
#include <stdlib.h>

#define MM_EXTRACT_FLOAT(v,i) _mm_cvtss_f32(_mm_shuffle_ps(v, v, _MM_SHUFFLE(0, 0, 0, i))) // To extract floats

void mul(__m128 m1r1, __m128 m1r2, __m128 m1r3, __m128 m1r4, __m128 m2c1, __m128 m2c2, __m128 m2c3, __m128 m2c4)
{
  printf( "Result:\n");
  __m128 res = _mm_dp_ps(m1r1, m2c1, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r1, m2c2, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r1, m2c3, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r1, m2c4, 0x0f1);
  printf("%f \n", MM_EXTRACT_FLOAT(res,0));

  res = _mm_dp_ps(m1r2, m2c1, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r2, m2c2, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r2, m2c3, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r2, m2c4, 0x0f1);
  printf("%f \n", MM_EXTRACT_FLOAT(res,0));

  res = _mm_dp_ps(m1r3, m2c1, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r3, m2c2, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r3, m2c3, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r3, m2c4, 0x0f1);
  printf("%f \n", MM_EXTRACT_FLOAT(res,0));

  res = _mm_dp_ps(m1r4, m2c1, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r4, m2c2, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r4, m2c3, 0x0f1);
  printf("%f \t", MM_EXTRACT_FLOAT(res,0));
  res = _mm_dp_ps(m1r4, m2c4, 0x0f1);
  printf("%f \n", MM_EXTRACT_FLOAT(res,0));
}

int main(){
  srand(time(NULL)); // Seed
  // Create the matrix 1
  __m128 m1r1 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m1r2 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m1r3 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m1r4 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  // Create the matrix 2
  __m128 m2c1 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m2c2 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m2c3 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());
  __m128 m2c4 = _mm_set_ps((float)rand(),(float)rand(),(float)rand(),(float)rand());

  printf( "Matrix 1:\n");
  printf("%f \t", MM_EXTRACT_FLOAT(m1r1,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r1,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r1,2));
  printf("%f \n", MM_EXTRACT_FLOAT(m1r1,3));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r2,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r2,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r2,2));
  printf("%f \n", MM_EXTRACT_FLOAT(m1r2,3));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r3,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r3,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r3,2));
  printf("%f \n", MM_EXTRACT_FLOAT(m1r3,3));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r4,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r4,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m1r4,2));
  printf("%f \n", MM_EXTRACT_FLOAT(m1r4,3));

  printf( "Matrix 2:\n");
  printf("%f \t", MM_EXTRACT_FLOAT(m2c1,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c2,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c3,0));
  printf("%f \n", MM_EXTRACT_FLOAT(m2c4,0));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c1,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c2,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c3,1));
  printf("%f \n", MM_EXTRACT_FLOAT(m2c4,1));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c1,2));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c2,2));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c3,2));
  printf("%f \n", MM_EXTRACT_FLOAT(m2c4,2));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c1,3));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c2,3));
  printf("%f \t", MM_EXTRACT_FLOAT(m2c3,3));
  printf("%f \n", MM_EXTRACT_FLOAT(m2c4,3));
  
  mul(m1r1, m1r2, m1r3, m1r4, m2c1, m2c2, m2c3, m2c4);
}
