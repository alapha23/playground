#! /bin/bash
source ~/anaconda2/bin/activate tensorflow
echo "Convert input to "$1
cd ~/James/deep-voice-conversion
if [ "$1" = "M" ]; then
        python convert.py case1_5_male
else
        python convert.py case1_5
fi



