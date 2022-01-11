uses math;
var
     ac:array [0..111111,0..2] of Int64;
     a1,b1,a2,b2:array [0..111111] of Int64;
     N,S,kol,kol1,inf,p,q,d:Int64;
     i:Longint;
     X:Char;
begin
     Readln(N,S);
     inf:=-1;
     for i:=1 to N do
begin
     Readln(X,P,Q);
     if X='B' then d:=1
              else d:=2;
     Inc(ac[p][d],q);
     inf:=max(inf,p);
 end;
     kol:=0;
     i:=inf;
     while (i>=0) and (kol<S) do
begin
     if ac[i][1]<>0 then begin
     Inc(kol);
     a1[kol]:=i;
     a2[kol]:=ac[i][1];
     end;
     Dec(i);
 end;
     i:=0;
     kol1:=0;
     while (i<=inf) and (kol1<S) do
begin
     if ac[i][2]<>0 then begin
     Inc(kol1);
     b1[kol1]:=i;
     b2[kol1]:=ac[i][2];
     end;
     Inc(i);
 end;
     for i:=kol1 downto 1 do
     Writeln('S ',b1[i],' ',b2[i]);
     for i:=1 to kol do
     Writeln('B ',a1[i],' ',a2[i]);
 end.


