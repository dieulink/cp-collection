Var
     n,i,j,t,o,p,target: Longint;
     a: Array[0..200001] Of Longint;
Procedure qs(first, last: Longint);
Var
  i, j, k, c: Longint;
Begin
  k := a[first + Random(last - first + 1)];
  i := first;
  j := last;
  c := 0;
  Repeat
    While (a[i] < k) Do
      Inc(i);
    While (a[j] > k) Do
      Dec(j);
    If (i <= j) Then
      Begin
        c := a[i];
        a[i] := a[j];
        a[j] := c;
        Inc(i);
        Dec(j);
      End;
  Until i > j;
  If (i < last) Then qs(i, last);
  If (j > first) Then qs(first, j);
End;
Begin
  Readln(n);
  For i := 1 To n Do
    read(a[i]);
  qs(1,n);
  target := 1;
  For i := 1 To n Do
    If a[i]>=target Then Inc(target);
  Writeln(target-1);
End.
