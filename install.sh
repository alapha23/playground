#! /bin/bash

# Deploy python3 environment on centos

if [ "$EUID" -ne 0 ];
  then echo "Usage: sudo bash install.sh"
  exit 0
fi

yes | yum update
yes | yum install gcc gcc-c++ git vim autoconf make cmake

if ! [ -x "$(command -v python3)" ]; then
    # Install python3, pip if not installed
    echo "python3 is not installed. Install python3"
    yes | yum install -y python3

    # Leave default python untouched as python2 can be vital for yum functions
    #rm `which python`
    #ln -s `which python3` /usr/bin/python
    #ln -s `which pip3` /usr/bin/pip

    echo "Successfully installed python3"
fi
echo "python3 already installed"

# install virtual environment for python3
yes | pip3 install pipenv virtualenv numpy scipy pyfftw
yes | pip3 install jupyter ipython

if ! [ -x "$(command -v virtualenv)" ]; then
    echo "Successfully installed virtualenv"
else
    echo "Failed to install virtualenv"
    exit 1
fi

if ! [ -x "$(command -v pipenv)" ]; then
    echo "Successfully installed pipenv"
else
    echo "Failed to install pipenv"
    exit 1
fi

echo "Successfully installed numpy"
echo "Successfully installed SciPy"
echo "Successfully installed pyfftw"
echo "Successfully installed jupyter"

# install anaconda
yes | yum install libXcomposite libXcursor libXi libXtst libXrandr alsa-lib mesa-libEGL libXdamage mesa-libGL libXScrnSaver

source ~/.bashrc
if ! [ -x "$(command -v conda)" ]; then
    echo "Successfully installed anaconda"
else
    echo "Failed to install anaconda"
    exit 1
fi

echo "Python environment deployment completed."
