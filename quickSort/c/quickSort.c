 
void qSort(int * list, int left, int right)
{
  int pivot, l_hold, r_hold;
 
  l_hold = left;
  r_hold = right;
  pivot = list[left];
  while (left < right)
  {
    while ((list[right] >= pivot) && (left < right))
      right--;
    if (left != right)
    {
      list[left] = list[right];
      left++;
    }
    while ((list[left] <= pivot) && (left < right))
      left++;
    if (left != right)
    {
      list[right] = list[left];
      right--;
    }
  }
  list[left] = pivot;
  pivot = left;
  left = l_hold;
  right = r_hold;
  
  
  if (left < pivot)
    qSort(list, left, pivot-1);
    
  if (right > pivot)
    qSort(list, pivot+1, right);
}

void quickSort(int * list, int size)
{
  qSort(list, 0, size - 1);
}
 