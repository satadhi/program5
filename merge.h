/* enter the array pointer and the size im msort() */
void merge(int *a ,int * b , int *c ,int b_size , int  c_size)
{
  int i,j,k;
  i = j = k = 0;
  while((i< b_size) && (j< c_size))
  {
    if(b[i] <= c[j])
      a[k++] = b[i++];
    else
       a[k++] = c[j++];
  }
  while(i < b_size)
     a[k++] = b[i++];
  while(j < c_size)
      a[k++] = c[j++];
}
void msort(int *a,int m)
{

  if(m < 2)
      return ;
  else{
  int *b,*c, b_size, c_size,i,j;
   b_size = m/2; c_size = m - b_size;
   b = (int*)malloc(b_size*sizeof(int));
   c = (int*)malloc(c_size*sizeof(int));
  for(i = 0 ; i< b_size ; i++)
      b[i] = a[i];
      for(j = 0 ; j< c_size ; j++)
          c[j] = a[b_size + j];
  msort(b,b_size);
  msort(c,c_size);
  merge(a , b ,c , b_size, c_size);
  }
}
