program TWO_ELEMENTS;
var a,n,i,maxa,maxb:byte;
begin
  maxa:=0;
  maxb:=0;
  readln(n);
  for i:=1 to n do 
   begin
    read(a);
    if a > maxa then maxa:=a;
   end;
  readln(n);
  for i:=1 to n do 
   begin
    read(a);
    if a > maxb then maxb:=a;
   end;
  write(maxa,' ',maxb);
end.
