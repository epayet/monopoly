#!
DIR=$( cd -P `dirname "$0"` && pwd )
docker run --rm -it -v $DIR:/source epayet/sfml
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$DIR'/libs/SFML'
