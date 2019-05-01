%part 6
%-------------------Legend Part F-----------------------%
%in_sig = Input Signal coefficients
%filt = Low pass filter coefficients
%No_rows = number of rows (must be No_rows=2^n)
%-------------------------------------------------------%

function [out] = part6(sig,filt,No_rows)

k=No_rows;

%creating two new matrices 
new = zeros(No_rows,(size(filt,2)/No_rows)-1+length(sig)/No_rows); 
new2 = zeros(No_rows,(size(filt,2)/No_rows)-1+length(sig)/No_rows); 

%rearranging signal coefficients
sig=reshape(sig,No_rows,(size(sig,2)/No_rows));

%rearranging filter coefficients
filt=reshape(fliplr(filt),No_rows,(size(filt,2)/No_rows)); 
filt=flipud(filt);

for i=1:No_rows
    out = (conv(sig(k,:),filt(i,:)));                                                       
    new(i,:) = out;                    %put output to each COL.
    k=k-1;
end

for i=1:size(new,2)
    new2(:,i)=ifft(new(:,i),No_rows);
end

out=new2;

end