
dependency:
    cd build && cmake .. --graphviz=grap.dot && dot -Tpng graph.dot -o grapImage.png
                        // not yet an image when .dot
                        // but easy to transform
prepare:
    rm -rf build
    mkdir build
                        // unrelated to dependency graph.

