int lcm(int m1,int n1)
{ int m,n,gcd,lcm;
  m=m1; n=n1;
  //To get gcd
  while(m!=n)
   {
     if(m>n)
        m=m-n;
     else
        n=n-m;
   }
  gcd = m;
  lcm = (m1*n1)/gcd; //finding lcm
  return lcm;
}
