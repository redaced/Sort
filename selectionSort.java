package Package;
import java.util.Scanner;
public class selectionSort {
	private static Scanner input;
	public static void main(String[] args) {
		input = new Scanner(System.in);
		int n;
		n = input.nextInt();
		int[] a = new int[n];
		for(int i=0;i<n;i++){
			a[i] = input.nextInt();
		}
		int min_pos;
		for(int i=0;i<n;i++){
			min_pos = i;
			for(int j=i;j<n;j++){
				if(a[j]<a[min_pos]){
					min_pos=j;
				}
			}
			if(min_pos != i){
				int b=a[i];
				a[i]=a[min_pos];
				a[min_pos]=b;
			}
		}
		System.out.print("Array sorted\n");
		for(int i=0;i<n;i++){
			System.out.print(a[i]+" ");
		}
	}
}
