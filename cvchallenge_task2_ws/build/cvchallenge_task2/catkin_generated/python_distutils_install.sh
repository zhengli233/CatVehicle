#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ece446/cvchallenge_task2_ws/src/cvchallenge_task2"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ece446/cvchallenge_task2_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ece446/cvchallenge_task2_ws/install/lib/python2.7/dist-packages:/home/ece446/cvchallenge_task2_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ece446/cvchallenge_task2_ws/build" \
    "/usr/bin/python" \
    "/home/ece446/cvchallenge_task2_ws/src/cvchallenge_task2/setup.py" \
    build --build-base "/home/ece446/cvchallenge_task2_ws/build/cvchallenge_task2" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ece446/cvchallenge_task2_ws/install" --install-scripts="/home/ece446/cvchallenge_task2_ws/install/bin"
