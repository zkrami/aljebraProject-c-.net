#pragma once
#include "matrix.h"
typedef long long ll;
typedef pair<ld, int> pi;

struct comp {

	bool operator () (pi a,pi b)
	{
		if (a.first > b.first) return true;
		if (a.second > b.second) return true;
		return false;
	}

};

class graph
{
private :
	matrix <ld> adj;
public:
	graph (int nodes)
	{
		adj = matrix<ld> (nodes+1,nodes+1,0);
	}
	~graph (void)
	{
		adj.~matrix();
	}
	int vertics_n (void)
	{
		int res = 0;
		rep(i,adj.rows())
			rep(j,adj.columns())
				if (fabsl(adj[i][j]) > errop)
					res++;
		return res;
	}
	int nodes (void)
	{return (adj.rows()-1);}
	void add_udvertic (int first,int second,ld w = 1.0)
	{
		adj[first][second] = w;
		adj[second][first] = w;
	}
	void add_dvertic (int from,int to,ld w = 1.0)
	{ adj[from][to] = w; }
	
	vector<ld>& operator [] (int i) { return adj[i]; }
	void operator = (graph temp) { adj = temp.adj; }
	bool operator == (graph temp) { return (adj == temp.adj); }
	bool operator != (graph temp) { return (adj != temp.adj); }

	ld shortest_bath (int stnode,int goalnode)
	{
	vector<bool> visited (nodes(),0);
	priority_queue< pi, vector<pi> , comp > Q;
    Q.push(make_pair(0, stnode));
    while (!Q.empty())
		{
        pi p = Q.top();     Q.pop();
        int node = p.second; ld dist = p.first;
        if (visited[node]) continue;
        visited[node] = true;
        if (node == goalnode) return dist;
        for (int i = 0; i < adj[node].size(); ++i)
            if (!visited[i] && (fabsl(adj[node][i]) > errop))
                Q.push(make_pair(dist + adj[node][i], i));
		}
    return -1;
	}

	int connected_comps (void)
	{
		int st,x,res = 0;
		vector<bool> visited (nodes(),0);		
	repi(i,1,nodes()+1) if (!visited[i])
	{
		res++;
		st = i;
		queue <int> q;
		q.push(st);
      while (!q.empty())
		{
            x = q.front();  q.pop();
            visited[x]=1;
            for (int i=0;i<adj[x].size();i++)
                  if (fabsl(adj[x][i]) > errop && !visited[i])
                        q.push(i);
		}

	}
	return res;
	}
	int connected_nodes (int node)
	{
		vector<bool> visited (nodes(),0);
		queue <int> q;
		int x,res = -1;
		q.push(node);
      while (!q.empty())
		{
            x = q.front();  q.pop(); res++;
            visited[x]=1;
            for (int i=0;i<adj[x].size();i++)
                  if (fabsl(adj[x][i]) > errop && !visited[i])
                        q.push(i);
		}
	  return res;
	}

};

class Hgraph {

private:
	vector<vector<pi> > adj;
public:
	Hgraph (int nodes)
	{
		adj = vector<vector<pi> > (nodes+1);
	}
	~Hgraph (void)
	{
		adj.clear();
	}
	int vertics_n (void)
	{
		int res = 0;
		rep(i,adj.size())
			res+=adj[i].size();
		return res;
	}
	int nodes (void)
	{return (adj.size()-1);}
	void add_udvertic (int first,int second,ld w = 1.0)
	{
		adj[first].push_back(make_pair(w,second));
		adj[second].push_back(make_pair(w,first));
	}
	void add_dvertic (int from,int to,ld w = 1.0)
	{ adj[from].push_back(make_pair(w,to)); }
	
	vector<pi>& operator [] (int i) { return (adj[i]); }
	void operator = (Hgraph temp) { adj = temp.adj; }
	bool operator == (Hgraph temp) { return (adj == temp.adj); }
	bool operator != (Hgraph temp) { return (adj != temp.adj); }

	ld shortest_bath (int stnode,int goalnode)
	{
	vector<bool> visited (nodes(),0);
	priority_queue< pi, vector<pi> , comp > Q;
    Q.push(make_pair(0, stnode));
    while (!Q.empty())
		{
        pi p = Q.top();     Q.pop();
        int node = p.second; ld dist = p.first;
        if (visited[node]) continue;
        visited[node] = true;
        if (node == goalnode) return dist;
        for (int i = 0; i < adj[node].size(); ++i)
            if (!visited[i])
                Q.push(make_pair(dist + adj[node][i].first, i));
		}
    return -1;
	}

	int connected_comps (void)
	{
		int st,x,res = 0;
		vector<bool> visited (nodes(),0);		
	repi(i,1,nodes()+1) if (!visited[i])
	{
		res++;
		st = i;
		queue <int> q;
		q.push(st);
      while (!q.empty())
		{
            x = q.front();  q.pop();
            visited[x]=1;
            for (int i=0;i<adj[x].size();i++)
				if (!visited[adj[x][i].second])
					  q.push(adj[x][i].second);
		}

	}
	return res;
	}
	int connected_nodes (int node)
	{
		vector<bool> visited (nodes(),0);
		queue <int> q;
		int x,res = -1;
		q.push(node);
      while (!q.empty())
		{
            x = q.front();  q.pop(); res++;
            visited[x]=1;
            for (int i=0;i<adj[x].size();i++)
                  if (!visited[adj[x][i].second])
                        q.push(adj[x][i].second);
		}
	  return res;
	}

};