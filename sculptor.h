#ifndef SCULPTOR_H
#define SCULPTOR_H

// o struct 'Voxel' cria uma entidade em três dimensões.
// 'r' é a variável resposável pelo vermelha
// 'g' é a variável resposável pelo verde
// 'b' é a variável resposável pelo azul
// 'a' é a variável resposável pela transparência
// 'isOn' é o que vai determinar a construção ou não do 'Voxel'

struct Voxel {
  float r,g,b; // cores
  float a; // transparência
  bool isOn; // inclusão
};

class Sculptor {
protected:
  Voxel ***v; // v será uma matriz tridimensional, formada a partir de um ponteiro para ponteiro para ponteiro para Voxel
   // 'nx', 'ny' e 'nz' armazenam as quantidades de elementos nas direções x,y e z da matriz
  int nx;
  int ny;
  int nz;

   // 'r', 'g' e 'b' armazenam os valores referentes as cores vermelha, verde e azul;
   // a armazena o valor referenete a transparência;
  float r;
  float g;
  float b;
  float a;
public:
   // a função 'Sculptor' aloca uma matriz para o ambiente onde serão esculpidos os objetos
   // '_nx', '_ny' e '_nz' são os valores referente as dimensões do objeto nas direção x,y e z, respectivamente
  Sculptor(int _nx, int _ny, int _nz);

   //a função '~Sculptor' é o destructor da função 'Sculptor';
  ~Sculptor();

    // a função 'setColor' atribui as cores ao objeto que será esculpido;
    // o valor das cores é um número float que pode variar de 0 à 1, que representam, respectivamente, ausência ou valor máximo de cor;
    // 'r', 'g' e 'b' são os parâmetros com os valores correspondente às cores vermelho, verde e azul, respectivamente;
  void setColor(float r, float g, float b, float alpha);

   // a função putVoxel cria um Voxel no ambiente, na posição definida pelo usuário
   // 'x', 'y' e 'z' são os parâmetros com o valores das coordenada x, y e z
  void putVoxel(int x, int y, int z);

  // a função 'cutVoxel' remove um Voxel na posição definida pelo usuário;
  // tendo os parâmetros os mesmos que a função 'putVoxel';
  void cutVoxel(int x, int y, int z);

  // a função 'putBox' cria uma entidade de Voxels no formato de uma cubo;
  // esta função utiliza os valores de índice 0 a 1, em cada uma das coordenadas;
  // x0,y0,z0 são os valores das coordenadas as quais o cubo será construído (valores iniciais);
  // x1,y1,z1 são os valores que delimitam até qual coordenada o cubo será construído (valores finais);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);


  // a função 'cutBox' remove entidades de Voxels no formato de um cubo;
  // tendo os parâmetros os mesmos que a função 'putBox';

  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

  // a função putSphere cria uma entidade de Voxels no formato de uma esfera.
  // 'xcenter','ycenter' e 'zcenter' são os parâmetros com os valores do centro da esfera
  // nas coordenada x, y e z, respectivamente;
  // e 'radius' é o parâmetro com o valor do raio da esfera;
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);

  // a função 'cutSphere' remove as entidade(s) de Voxels no formato de uma esfera
  // os parâmetros utilizados por esta função são os mesmos da 'putSphere'

  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

  // criar uma sequência de Voxels em forma de elipsóide.
  // 'xcenter', 'ycenter' e 'zcenter' são os parâmetros com os valores do centro da elipsóide na coordenada x, y e z;
  // 'rx', 'ry' e 'rz' são os parâmetros com os valores do raios da elipsóide na coordenada x,y e z;
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  // a função cutEllipsoid remove entidade(s) de Voxels no formato de um elipsóide
  // os parâmetros utilizados por esta função são os mesmos da 'cutEllipsoid'
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

  // cria o arquivo para leitura do desenho, contendo as dimensões e as cores
  void writeOFF(char* filename);
};
#endif // SCULPTOR_H
