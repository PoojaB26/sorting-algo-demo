void bubble_sort(int A[], int num){
	for (i = num-1; i >=0; i--) {
      for (j = 0; j < i - 1; j++) {
         if (A[j] > A[j + 1]) {
            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
         }
      }
	
	
	
}