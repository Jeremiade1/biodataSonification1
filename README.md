# biodataSonification1
GOOD MORNING USA 

Dans ce travail/recherche, je m'intéresse à la notion de databionosification.
je désire perfomer pour les plantes, avec des instruments qui arrivent à résonner avec leurs affects relatifs.

Pour ce faire, j'ai d'abord scruté le travail existant de mes pairs sur github, et youtube. 

j'ai découvert le travail de Leslie Garcia. Son projet Pulsum Plantae (https://github.com/Lessnullvoid/Pulsum-Plantae) fut la base de mon exploration autour de la biodatasonification. 
Son github fournit une base solide sur les procédés et dévelopemment nécessaire. 

J'ai aussi choisi d'utiliser Pure Data, pour synthoniser les données captées de mes plantes. Le youtubeur et artiste audivisuel, Takumi Ogata, est une source que j'ai pu consulté de manière hebdomadaire pour ce qui était du développement sur Pd. (https://www.youtube.com/@SoundSimulator/videos) 

Dans ce README, je vais tenter de résumer les matériaux et patchs que j'utilise pour reflèter la notion de opensource qui m'a permi d'apprendre généreusement dans ce champ d'expertise.


//MATÉRIEL:
 - (Mac ou autres)

- Arduino Duemilanove
  ![354442546_806576880714725_6290857087937855877_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/f333d119-b51d-4642-8524-e2abb30fb87c)
  
- cable usb pour arduino
  ![353874845_770914664763883_2713990211226236978_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/753b9719-f9bc-41a8-8af3-76be162bc03a)

- adapteur usb C to usb
  ![353130701_818002053007148_2358090501214796663_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/41d9a563-d923-4ee9-a1c4-21af5356c808)

- une chip GSR v1.2
 ![GSR](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/85a38e7d-4b3f-4ffb-90e1-2559ad28a9be)
 https://wiki.seeedstudio.com/Grove-GSR_Sensor/

- la partie senseur a été remplacer par d'autres électrodes ( sur dijikey: 1568-1803-ND ) 
  ceux-ci sont été hacker pour ''fiter'' avec les electrodes
  
  ![353102774_747490517124874_2244645358293791423_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/1092ac9b-3161-42ad-97d3-26bd57e44d3a)

- des jumperwire de couleurs 
  ![354422352_646363777002375_537094724174746239_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/b85bd435-082f-410a-a72d-c6fb99adfaaf)

 - des gel electrodes  
  ![354411971_166035629782804_1645680762681585431_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/1758154d-9256-4cb3-8827-17d9cd3686cb)
   
  sur  https://www.amazon.ca/dp/B08XXVW3PK?psc=1&ref=ppx_yo2ov_dt_b_product_details 
       *il existe problablement une alternative, mais j'utilise ceux-ci




//CODAGE ( Arduino) 
https://github.com/Jeremiade1/biodataSonification1/blob/main/code/Code%20arduino

 - copier-coller sur arduino

//Patch Pure data
https://github.com/Jeremiade1/biodataSonification1/blob/main/code/pure%20data/Biodata.pd

- télecharger le zip et ouvrez la patch Pd


<img width="964" alt="Capture d’écran, le 2023-06-14 à 11 02 37" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/e5342c7c-c58f-416c-a1d4-c66c2bc65231">

Dans cette patch, il y a un port de arduino vers Pd, un synthétiseur qui transforme les data en objets sonore, et un visualisateur 
Le synthétiseur est développé par Ogata pour sonofier les biodata. 


<img width="942" alt="Capture d’écran, le 2023-06-14 à 10 42 03" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/9703673c-e9f3-4685-8860-fbbe5600b27">

<img width="841" alt="Capture d’écran, le 2023-06-14 à 10 44 23" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/e55d8f8c-a6a7-4d90-a590-e7eb7a0c4ae9">

<img width="841" alt="Capture d’écran, le 2023-06-14 à 10 44 42" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/3de8fb64-a4ed-469b-9ed1-a7c703e52055">

<img width="765" alt="Capture d’écran, le 2023-06-14 à 10 44 58" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/aed876a2-8497-4a1d-87a9-9f37ca31f9a6">

<img width="247" alt="Capture d’écran, le 2023-06-14 à 10 53 59" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/20b8b737-6685-43a8-90dc-3d5ea295eced">

  - l'objet Pd Iem_alisttosym bug souvent. Pour s'assurer qu'il fonctionne garder l'objet iemlib ouvert
  

// Pour envoyer les datas capturer par la chip GSR, puis arduino vers pure data : 

  - brancher les jumperwire dans le arduino
    - rouge: 5 Volt
    - noir: ground ( GND )
    - BLEU : ANALOG IN 0 

![354395823_770987821430554_8631611085778958948_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/c9f2b430-cc1e-4b60-8818-88190a3d250f)
   
  - connecter les electrodes sur une plantes ( j'utilise ma main comme exemple) ( Les gel electrode vont mesurer la résistance électrique entre deux objets physique 
  
![354392851_113732735067487_8859888815789948441_n](https://github.com/Jeremiade1/biodataSonification1/assets/133068304/3e0952eb-c9bb-4b9c-947c-920d09fbbe1d)

sur arduino ( j'utilise Arduino IDE 2.1.0)
- assurer vous d'utiliser le bon port 
      dans mon cas: 
<img width="964" alt="Capture d’écran, le 2023-06-14 à 11 22 11" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/384126dc-bf3a-4723-a0ce-7a7b7405b5b2">

puis, Verify et Upload le code vers Arduino ( en haut à gauche )
<img width="698" alt="Capture d’écran, le 2023-06-14 à 11 23 28" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/362e46ec-73f5-4d83-8ed8-c20374b6d814">

appuyer sur la loupe en haut à droite 
<img width="922" alt="Capture d’écran, le 2023-06-14 à 11 24 40" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/e9cc6e2f-9ad5-48d0-83e5-5daacd6b6553">

à cette étape vous devriez recevoir des données provenant de votre circuit dans la boite en blanc 

fermer l'app arduino puis ouvrer la patch Pd ( vous allez toujours capter des données)

cochez DSP dans la fenêtre de base de Pd 
<img width="492" alt="Capture d’écran, le 2023-06-14 à 11 28 58" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/a473a073-1554-43df-aa26-1e131426be22">

pour commencer à envoyer les datas de arduino vers Pd : 
 -  clicker sur la boite message open 2 de la patch ( cela devrait ouvrir le port /dev/tty.usbserial-A9007uWR )
  pour confirmer, dans la fenêtre principal, vous devriez recevoir ce message venant de [comport] 
  
<img width="496" alt="Capture d’écran, le 2023-06-14 à 11 35 06" src="https://github.com/Jeremiade1/biodataSonification1/assets/133068304/8a19d58b-4cf5-4943-929e-a7ca90f88671">



// Astuces de modulation 

Maintenant vous devriez avoir du son, provonant d'une résistance électrique d'une plante ou autre.

Pour modifier ce son, augmenter le pitch, utiliser le slider vertical ( celui en vert)

humidifier les electrodes avec de l'eau( cela marche le mieux avec un spray gun) 



