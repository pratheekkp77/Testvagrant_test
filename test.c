    public static void main[string[] args]
int[][] basket= new int [4][3];
basket[0][0]=1100;
basket[0][1]=18;
basket[0][2]=1;
basket[1][0]=900;
basket[1][1]=12;
basket[1][2]=4;
basket[2][0]=200;
basket[2][1]=28;
basket[2][2]=3;
basket[3][0]=100;
basket[3][1]=0;
basket[3][2]=2;
int gstpaid = Integer.MIN_VALUE;
int maxproductid = 0;
int total_amount=0;
for(int i=0;i<4;i++)
{
    int gstpaid=(basket[i][2]*basket[i][0]*basket[i][1])/100;
    if(gstpaid>maxproductid)
    {
        maxproductid=i;
        maxgstpaid=gstpaid;
    }

    if(basket[1][0]>=500)
    for(int i=0;i<4;i++)
      for(int j=0;j<3;j++)
      {
        if (i<=1)
      
    {
      total_amount=(basket[i][0]*(basket[i][1])/100*basket[i][2]);
    }
      }

}


