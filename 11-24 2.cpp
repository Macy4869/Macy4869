

#include<stdio.h>
public int chkStep(int[]arr,int n)
{
	if(arr==null||arr.length<1||arr.length!=n)
{
	return -1;	
}
return checkstep(arr,n-1,1,2,3);}

	private int checkstep(int[]arr,int cur,int left,int mid,int right);
	{if(cur==-1)
	{return 0;
	}
	if(arr[cur]==mid)
	{return -1;
	}
	else if(arr[cur]==left)
	{return checkstep(arr,cur-1,left,right,mid);
	}
	else{int tmp=checkstep(arr,cur-1,mid,left,right);
	if(tmp==-1){return -1;
	}
	return(1<<cur)+tmp;
	}
		}
