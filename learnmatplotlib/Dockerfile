# USE THIS DOCKERFILE AS BASE FOR DATA SCIENCE !!!

# Use latest miniconda image as parent
# miniconda is python + conda installer
FROM continuumio/miniconda3

# Meta-data
LABEL maintainer="Aly Sivji <alysivji@gmail.com>" \
      description="Docker Data Science Workflow #2: Data Science Project\
      Libraries inside image. Data/code mounted via shared folder.\
      Easy to set up a new developmenet environment."

# Set the working directory to /app
WORKDIR /app

# Install the required libraries
RUN conda install jupyter -y && \
    conda install pandas -y && \
    conda install matplotlib -y

# Make port 8888 available to the world outside this container
EXPOSE 8888

# Create mountpoint
VOLUME /app

# Run jupyter when container launches
CMD ["jupyter", "notebook", "--ip='*'", "--port=8888", "--no-browser", "--allow-root"]

# --------------------------------------------
# docker build -t mc .
# docker run -it -p 8888:8888 -v /nfs/2019/c/cchao/c/learnmatplotlib:/app mc

# docker start -ia mc

# docker exec -it mc /bin/sh

# ???
#    conda clean -y -all
 