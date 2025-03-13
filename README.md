
# COMO EXECUTAR LOLCODE


## Você pode: 
- 1: Executar num compilador online, como o [JDoodle](https://www.jdoodle.com/execute-lolcode-online)
- 2: Usar o compilador local:


#### 1. Clonar repositorio:

```http
  git clone https://github.com/justinmeza/lci.git
```
#### 2. Instalar interpretador ((WINDOWS) Python2.7+ necessário).
VOCE PRECISA EXECUTAR ISSO NUM CMD COMO ADMINISTRADOR. install.py ESTA DENTRO DE lci.
```http
  cd lci && python install.py 
```
#### 2. Instalar interpretador (LINUX).

```http
  git clone https://github.com/criperrr/Conversor.git Conversor/ &&
  chmod +x install.sh && bash install.sh
```

#### 3. Executar o código:
```http
  # Se vc instalou pelo linux pode pular essa etapa de clonagem. N PULA O CD 
  git clone https://github.com/criperrr/Conversor.git && cd Conversor/LOLCode
  # No windows:
  ..\..\lci.exe test.lol
  # No linux:
  lci test.lol
```

