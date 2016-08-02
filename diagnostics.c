



void track_bounds(void)
    {
        input[0]=ADC1BUF0;
        output=input[0]*ADCGAIN+OFFSET;
        DAC1RDAT=output;
        if(input[0]<min_in) min_in=input[0];
        if(input[0]>max_in) max_in=input[0];
    }
