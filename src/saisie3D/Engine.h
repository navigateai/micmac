#ifndef ENGINE_H
#define ENGINE_H

#include <QFileDialog>
#include <QDir>

#include "Cloud.h"
#include "Data.h"
#include "general/bitm.h"

class cLoader : QObject
{
    public:

        cLoader();

        CamStenope * loadCamera(string aNameFile);
        vector <CamStenope *> loadCameras();

        Cloud* loadCloud( string i_ply_file );
        vector <Cloud *> loadClouds();

        void setDir(QDir aDir){m_Dir = aDir;}
        QDir getDir(){return m_Dir;}

        void SetFilenamesOut();
        QStringList GetFilenamesOut() {return m_FilenamesOut;}

    private:
        QStringList m_FilenamesIn;
        QStringList m_FilenamesOut;

        //! Working directory (where the ply files are stored)
        QDir        m_Dir;
};

class cEngine
{
    public:

        cEngine();
        ~cEngine();

        //! Set working directory
        void setDir(QDir aDir){m_Loader->setDir(aDir);}

        //! Load point cloud .ply files
        void loadClouds(QStringList);

        //! Load point cloud .ply files
        void loadPlys();

        //! Load cameras .xml files
        void loadCameras(QStringList);

        //! Load cameras orientation files
        void loadCameras();

        //! Compute mask binary images: projection of visible points into loaded cameras
        void doMasks();

        cData*   getData()  {return m_Data;}

    private:

        cLoader *m_Loader;
        cData   *m_Data;
};

#endif // ENGINE_H
