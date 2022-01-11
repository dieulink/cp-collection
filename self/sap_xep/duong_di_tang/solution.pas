uses math;
var
     dp,d,x,y,c:array [0..300300] of Longint;
     N,M,i,answer,k,j:Longint;
procedure Q_Sort(L,R:Longint);
var
     ii,jj,Z,Q:Longint;
begin
     ii:=L;
     jj:=R;
     Z:=c[Random(R-L)+L];
repeat
     while c[ii]<Z do
     Inc(ii);
     while c[jj]>Z do
     Dec(jj);
     if ii<=jj then begin
                         Q:=x[ii];
                         x[ii]:=x[jj];
                         x[jj]:=Q;
                         Q:=y[ii];
                         y[ii]:=y[jj];
                         y[jj]:=Q;
                         Q:=c[ii];
                         c[ii]:=c[jj];
                         c[jj]:=Q;
                         Inc(ii);
                         Dec(jj);
                     end;
until ii>jj;
     if L<jj then Q_Sort(L,jj);
     if ii<R then Q_Sort(ii,R);
 end;

begin
     Readln(N,M);
     for i:=1 to N do
begin
     dp[i]:=0;
     d[i]:=0;
 end;
     for i:=1 to M do
     Readln(x[i],y[i],c[i]);
     Q_Sort(1,M);
     k:=1;
     while k<=M do
begin
     i:=k;
     while c[i]=c[k] do
begin
     d[i]:=dp[x[i]]+1;
     Inc(i);
 end;
     j:=i-1;
     for i:=k to j do
     dp[y[i]]:=max(dp[y[i]],d[i]);
     k:=j+1;
 end;
     answer:=0;
     for i:=1 to N do
     answer:=max(answer,dp[i]);
     Writeln(answer);
 end.
