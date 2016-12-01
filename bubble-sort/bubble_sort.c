void bubble_sort(int A[], int num){
	for (i = 1; i < num; i++) {
      for (j = 0; j < num - 1; j++) {
         if (A[j] > A[j + 1]) {
            temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
         }
      }
	
	
	
}