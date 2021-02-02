# create build directories
mkdir -p external_dependencies

cd external_dependencies

if [ ! -d "termcolor" ]
then
    git clone git@github.com:ikalnytskyi/termcolor.git
fi
