public class Main
{
  public static void main (String[]args)
  {
    int[] arr={0,2,5,88,100};
    int target=88;
    int ans=binarySearch(arr,target);
   System.out.println(ans);
  }
  static int binarySearch (int[]arr, int target)
  {
    int start = 0;
    int end = arr.length - 1;
    while (start <= end)
      {
	//  int mid=(start+end)/2; //[probelm coz of int]
	int mid = start + (end - start) / 2;
	if (target < arr[mid])
	  {
	    end = mid - 1;
	  }
	else if (target > arr[mid])
	  {
	    start = mid + 1;
	  }
	else
	  {
	    return mid;
	  }
      }
      return -1;
  }
}

//output:
//3
