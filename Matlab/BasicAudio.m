
close;
clear;
clc;

DEFAULT_SAMPLE_RATE = 40000
DEFAULT_DATA_SIZE = 16
DEFAULT_RECORD_LENGTH = 4
DEFAULT_GAIN = 4
MIX_FREQUENCY_1 = 1000
MIX_FREQUENCY_2 = 300


recobj=audiorecorder(DEFAULT_SAMPLE_RATE, DEFAULT_DATA_SIZE, 1)
disp('Beginning the recording');

while 1
    
disp('Restarting recording process');
recordblocking(recobj, DEFAULT_RECORD_LENGTH);
y=getaudiodata(recobj);

subplot(2, 1, 1);
plot(y);

subplot(2, 1, 2);

disp('Calculating');
delta=2*pi;
delta=delta/length(y);
x=(0:delta:2*pi);
x=x(1:1:end-1);
z=sin(x.*MIX_FREQUENCY_1);
z2=sin(x.*MIX_FREQUENCY_2);
out=z'.*z2'.*y.*DEFAULT_GAIN;
plot(out);

disp('Playing');
player=audioplayer(out, DEFAULT_SAMPLE_RATE);
play(player);
pause(DEFAULT_RECORD_LENGTH);
delete(player);
end