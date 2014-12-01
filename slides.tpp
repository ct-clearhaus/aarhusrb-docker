

--author Casper Thomsen
--title How we use Docker
--date 2014-12-01


--newpage agenda
--heading Agenda

Docker introduction

How we use it

--newpage docker-intro
--heading Docker introduction

* What?

* Getting started

* Demo

--newpage whats-docker
--heading What is Docker

http://en.wikipedia.org/wiki/Operating_system–level_virtualization
Friends: chroot, jails, zones, lxc.

Shipping industry

* Old days: custom fitted pianos wraps
* 1950: Containers; ISO standardised 1970

--newpage getting-started
--heading Getting started

Ubuntu
--beginshelloutput
sudo apt-get install docker.io
--endshelloutput


Mac OS X

  Grab https://github.com/boot2docker/osx-installer/releases


Otherwise

  http://docs.docker.com/installation/

--newpage demo

--fgcolor yellow
--center  _____                       
--center |  __ \                      
--center | |  | | ___ _ __ ___   ___  
--center | |  | |/ _ \ '_ ` _ \ / _ \ 
--center | |__| |  __/ | | | | | (_) |
--center |_____/ \___|_| |_| |_|\___/ 
--center                              
--center                              
--fgcolor white

--newpage demo-content-1
--heading Demo

* docker run, docker commit, docker run:

    v---- commit ----.
  IMAGE           CONTAINER
    `----- run ------^
---

* nginx-example
  - Dockerfile, build
  - run, expose ports
  - developing: volumes (host)
  - registry: push, pull
---

* linking
  - nc-app
  - debian-w-curl

--newpage we-use
--heading How we use Docker

* Linking and non-linking
  - nginx-proxy and nc-app

* Secrets

* Logging

* Fig

* What we're aiming at
