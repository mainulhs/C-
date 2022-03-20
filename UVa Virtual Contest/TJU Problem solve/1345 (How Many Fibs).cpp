#include<cstdio>
#include<cstring>

char fib[00][00];
void fibonacci(){
 long i,ii,j,k,l,len,l1,l2,index,tmp,carry;
 char temp[150],ch;

 strcpy(fib[0],"1");
 strcpy(fib[1],"2");
 for(i = 2; i < 490; i++){
  l1 = strlen(fib[i-2])-1;
  l2 = strlen(fib[i-1])-1;
  index = carry = 0;
  while(l1 >= 0){
   tmp = (fib[i-2][l1]-'0') + (fib[i-1][l2]-'0') + carry;
   carry = tmp/10;
   tmp %= 10;
   temp[index++] = tmp+'0';
   l1--;
   l2--;
  }
  while(l2 >= 0){

   tmp = (fib[i-1][l2]-'0') + carry;
   carry = tmp/10;
   tmp %= 10;
   temp[index++] = tmp+'0';
   l2--;
  }
  while(carry){
   temp[index++] = (carry%10) + '0';
   carry /= 10;
  }
  temp[index] = NULL;

  len = strlen(temp);
  //strrev(temp);
  long hi = len/2;
  for(ii = 0,j = len-1; ii < hi; ii++,j--){
   ch = temp[ii];
   temp[ii] = temp[j];
   temp[j] = ch;
  }
  strcpy(fib[i],temp);
 }
}
int comp(char fff[],char num[]){
 long l,ll,i;
 l = strlen(fff);
 ll = strlen(num);

 if(l != ll){
  return l-ll;
 }
 for(i = 0; i < l; i++){
  if(fff[i] > num[i])
   return 1;
  else if(fff[i] < num[i])
   return -1;
 }
 return 0;
}




int main(){
 long i,j,k,l,temp,start,end,tmp;
 char a[150],b[150];

 fibonacci();

 //freopen("i.txt","r",stdin);
 while(scanf("%s %s",&a,&b)==2){
  if(a[0] == '0' && b[0] == '0')
   break;
  for(i = 0; i < 490; i++){
    start = i;
    break;
   }
  }

  for(i = 0; i < 490; i++){
   tmp = comp(fib[i],b);
   if(tmp >= 0){
    end = i;
    if(tmp)
     end--;
    break;
   }
  }
  printf("%ld\n",end-start+1);
  return 0;
 }
