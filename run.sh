DIR=$( cd -P `dirname "$0"` && pwd )
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$DIR'/libs/SFML'
./monopoly
