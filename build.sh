#!
DIR=$( cd -P `dirname "$0"` && pwd )
docker run --rm -it -v $DIR:/source epayet/sfml-1.6
