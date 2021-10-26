docker-compose rm
REMOVE_CONTAINERS=on DOCKER_IMAGE=shell-app TAG=development make docker-image
docker-compose up