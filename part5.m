%part 5
%-------------------Legend Part E-----------------------%
sig =xx; % Input Signal coefficients
filt =filter_5; %Low pass filter coefficients 
KK =200/10; %Carrier frequency/Bandwith
decRate = 128;
%-------------------------------------------------------%



sig=reshape(sig,decRate,(size(sig,2)/decRate));                 %rearranging signal coefficients

filt=reshape(fliplr(filt),decRate,(size(filt,2)/decRate));      %rearranging signal coefficients
filt=flipud(filt);                                              %filt is now totally inverted

k=decRate;
out = zeros(1,(size(sig,2))+size(filt,2)-1);                    %KK is Fc/Bw? where Bw = 10.

for i=1:decRate                                                 %signal col number, k=row number
    temp = conv(sig(k,:),filt(i,:));                            %passing through filter
    out = out + temp.*exp(j*2*pi*((i-1)*KK/decRate));           %NOTE: there is no time component!
    k=k-1;                                                      %to normalize the frwuency, we multiply by (200/1000)      
end

%plotting
figure; plot(out(1:2:end),'*');
figure; plot(real(fft(out)));
